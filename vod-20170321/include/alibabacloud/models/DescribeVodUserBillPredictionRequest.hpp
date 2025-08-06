// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERBILLPREDICTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERBILLPREDICTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserBillPredictionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserBillPredictionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserBillPredictionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DescribeVodUserBillPredictionRequest() = default ;
    DescribeVodUserBillPredictionRequest(const DescribeVodUserBillPredictionRequest &) = default ;
    DescribeVodUserBillPredictionRequest(DescribeVodUserBillPredictionRequest &&) = default ;
    DescribeVodUserBillPredictionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserBillPredictionRequest() = default ;
    DescribeVodUserBillPredictionRequest& operator=(const DescribeVodUserBillPredictionRequest &) = default ;
    DescribeVodUserBillPredictionRequest& operator=(DescribeVodUserBillPredictionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->dimension_ != nullptr && this->ownerId_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeVodUserBillPredictionRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeVodUserBillPredictionRequest& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodUserBillPredictionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    std::shared_ptr<string> area_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dimension_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
