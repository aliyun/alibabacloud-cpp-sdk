// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYSAMLSERVICEPROVIDERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYSAMLSERVICEPROVIDERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetDirectorySAMLServiceProviderInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectorySAMLServiceProviderInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectorySAMLServiceProviderInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
    };
    GetDirectorySAMLServiceProviderInfoRequest() = default ;
    GetDirectorySAMLServiceProviderInfoRequest(const GetDirectorySAMLServiceProviderInfoRequest &) = default ;
    GetDirectorySAMLServiceProviderInfoRequest(GetDirectorySAMLServiceProviderInfoRequest &&) = default ;
    GetDirectorySAMLServiceProviderInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectorySAMLServiceProviderInfoRequest() = default ;
    GetDirectorySAMLServiceProviderInfoRequest& operator=(const GetDirectorySAMLServiceProviderInfoRequest &) = default ;
    GetDirectorySAMLServiceProviderInfoRequest& operator=(GetDirectorySAMLServiceProviderInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetDirectorySAMLServiceProviderInfoRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
