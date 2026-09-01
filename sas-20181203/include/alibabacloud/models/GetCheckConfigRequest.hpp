// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    GetCheckConfigRequest() = default ;
    GetCheckConfigRequest(const GetCheckConfigRequest &) = default ;
    GetCheckConfigRequest(GetCheckConfigRequest &&) = default ;
    GetCheckConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckConfigRequest() = default ;
    GetCheckConfigRequest& operator=(const GetCheckConfigRequest &) = default ;
    GetCheckConfigRequest& operator=(GetCheckConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceDirectoryAccountId_ == nullptr; };
    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline GetCheckConfigRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
