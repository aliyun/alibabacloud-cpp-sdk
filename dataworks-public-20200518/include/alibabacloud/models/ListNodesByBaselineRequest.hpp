// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESBYBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESBYBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListNodesByBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesByBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesByBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
    };
    ListNodesByBaselineRequest() = default ;
    ListNodesByBaselineRequest(const ListNodesByBaselineRequest &) = default ;
    ListNodesByBaselineRequest(ListNodesByBaselineRequest &&) = default ;
    ListNodesByBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesByBaselineRequest() = default ;
    ListNodesByBaselineRequest& operator=(const ListNodesByBaselineRequest &) = default ;
    ListNodesByBaselineRequest& operator=(ListNodesByBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListNodesByBaselineRequest& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


  protected:
    // The baseline ID. You can call the [ListBaselineConfigs](https://help.aliyun.com/document_detail/173964.html) operation to query the baseline ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
