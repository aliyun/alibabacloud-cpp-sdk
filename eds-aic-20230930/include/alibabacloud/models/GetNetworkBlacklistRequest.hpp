// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class GetNetworkBlacklistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkBlacklistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkBlacklistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetNetworkBlacklistRequest() = default ;
    GetNetworkBlacklistRequest(const GetNetworkBlacklistRequest &) = default ;
    GetNetworkBlacklistRequest(GetNetworkBlacklistRequest &&) = default ;
    GetNetworkBlacklistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkBlacklistRequest() = default ;
    GetNetworkBlacklistRequest& operator=(const GetNetworkBlacklistRequest &) = default ;
    GetNetworkBlacklistRequest& operator=(GetNetworkBlacklistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetNetworkBlacklistRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
