// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class ListTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
    };
    ListTagsRequest() = default ;
    ListTagsRequest(const ListTagsRequest &) = default ;
    ListTagsRequest(ListTagsRequest &&) = default ;
    ListTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsRequest() = default ;
    ListTagsRequest& operator=(const ListTagsRequest &) = default ;
    ListTagsRequest& operator=(ListTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline ListTagsRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
