// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTBYNAMERESPONSEBODYPROJECTINFOWHITELISTS_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTBYNAMERESPONSEBODYPROJECTINFOWHITELISTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetProjectByNameResponseBodyProjectInfoWhiteLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectByNameResponseBodyProjectInfoWhiteLists& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectByNameResponseBodyProjectInfoWhiteLists& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    GetProjectByNameResponseBodyProjectInfoWhiteLists() = default ;
    GetProjectByNameResponseBodyProjectInfoWhiteLists(const GetProjectByNameResponseBodyProjectInfoWhiteLists &) = default ;
    GetProjectByNameResponseBodyProjectInfoWhiteLists(GetProjectByNameResponseBodyProjectInfoWhiteLists &&) = default ;
    GetProjectByNameResponseBodyProjectInfoWhiteLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectByNameResponseBodyProjectInfoWhiteLists() = default ;
    GetProjectByNameResponseBodyProjectInfoWhiteLists& operator=(const GetProjectByNameResponseBodyProjectInfoWhiteLists &) = default ;
    GetProjectByNameResponseBodyProjectInfoWhiteLists& operator=(GetProjectByNameResponseBodyProjectInfoWhiteLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->ip_ != nullptr && this->port_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetProjectByNameResponseBodyProjectInfoWhiteLists& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetProjectByNameResponseBodyProjectInfoWhiteLists& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline GetProjectByNameResponseBodyProjectInfoWhiteLists& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // Ip
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
