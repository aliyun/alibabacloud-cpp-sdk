// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkInstanceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInstanceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeNetworkInstanceListRequest() = default ;
    DescribeNetworkInstanceListRequest(const DescribeNetworkInstanceListRequest &) = default ;
    DescribeNetworkInstanceListRequest(DescribeNetworkInstanceListRequest &&) = default ;
    DescribeNetworkInstanceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInstanceListRequest() = default ;
    DescribeNetworkInstanceListRequest& operator=(const DescribeNetworkInstanceListRequest &) = default ;
    DescribeNetworkInstanceListRequest& operator=(DescribeNetworkInstanceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->connectType_ == nullptr && this->lang_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeNetworkInstanceListRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string getConnectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline DescribeNetworkInstanceListRequest& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNetworkInstanceListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    shared_ptr<string> cenId_ {};
    shared_ptr<string> connectType_ {};
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
