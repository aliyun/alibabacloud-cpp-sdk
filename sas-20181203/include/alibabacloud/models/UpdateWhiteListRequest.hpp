// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegistryId, registryId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistryId, registryId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    UpdateWhiteListRequest() = default ;
    UpdateWhiteListRequest(const UpdateWhiteListRequest &) = default ;
    UpdateWhiteListRequest(UpdateWhiteListRequest &&) = default ;
    UpdateWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteListRequest() = default ;
    UpdateWhiteListRequest& operator=(const UpdateWhiteListRequest &) = default ;
    UpdateWhiteListRequest& operator=(UpdateWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registryId_ == nullptr
        && this->whiteList_ == nullptr; };
    // registryId Field Functions 
    bool hasRegistryId() const { return this->registryId_ != nullptr;};
    void deleteRegistryId() { this->registryId_ = nullptr;};
    inline int64_t getRegistryId() const { DARABONBA_PTR_GET_DEFAULT(registryId_, 0L) };
    inline UpdateWhiteListRequest& setRegistryId(int64_t registryId) { DARABONBA_PTR_SET_VALUE(registryId_, registryId) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline UpdateWhiteListRequest& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // The ID of the image repository.
    // 
    // >  You can call the [PageImageRegistry](~~PageImageRegistry~~) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> registryId_ {};
    // The IP address whitelist. Separate multiple IP addresses with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> whiteList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
