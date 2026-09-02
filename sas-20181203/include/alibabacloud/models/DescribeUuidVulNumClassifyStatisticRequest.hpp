// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUUIDVULNUMCLASSIFYSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUUIDVULNUMCLASSIFYSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUuidVulNumClassifyStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUuidVulNumClassifyStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageVul, imageVul_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUuidVulNumClassifyStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageVul, imageVul_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeUuidVulNumClassifyStatisticRequest() = default ;
    DescribeUuidVulNumClassifyStatisticRequest(const DescribeUuidVulNumClassifyStatisticRequest &) = default ;
    DescribeUuidVulNumClassifyStatisticRequest(DescribeUuidVulNumClassifyStatisticRequest &&) = default ;
    DescribeUuidVulNumClassifyStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUuidVulNumClassifyStatisticRequest() = default ;
    DescribeUuidVulNumClassifyStatisticRequest& operator=(const DescribeUuidVulNumClassifyStatisticRequest &) = default ;
    DescribeUuidVulNumClassifyStatisticRequest& operator=(DescribeUuidVulNumClassifyStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageVul_ == nullptr
        && this->uuids_ == nullptr; };
    // imageVul Field Functions 
    bool hasImageVul() const { return this->imageVul_ != nullptr;};
    void deleteImageVul() { this->imageVul_ = nullptr;};
    inline bool getImageVul() const { DARABONBA_PTR_GET_DEFAULT(imageVul_, false) };
    inline DescribeUuidVulNumClassifyStatisticRequest& setImageVul(bool imageVul) { DARABONBA_PTR_SET_VALUE(imageVul_, imageVul) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeUuidVulNumClassifyStatisticRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    shared_ptr<bool> imageVul_ {};
    // This parameter is required.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
