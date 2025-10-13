// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCEWEBTERMINALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCEWEBTERMINALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CheckInstanceWebTerminalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceWebTerminalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckInfo, checkInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceWebTerminalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckInfo, checkInfo_);
    };
    CheckInstanceWebTerminalRequest() = default ;
    CheckInstanceWebTerminalRequest(const CheckInstanceWebTerminalRequest &) = default ;
    CheckInstanceWebTerminalRequest(CheckInstanceWebTerminalRequest &&) = default ;
    CheckInstanceWebTerminalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceWebTerminalRequest() = default ;
    CheckInstanceWebTerminalRequest& operator=(const CheckInstanceWebTerminalRequest &) = default ;
    CheckInstanceWebTerminalRequest& operator=(CheckInstanceWebTerminalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkInfo_ == nullptr; };
    // checkInfo Field Functions 
    bool hasCheckInfo() const { return this->checkInfo_ != nullptr;};
    void deleteCheckInfo() { this->checkInfo_ = nullptr;};
    inline string checkInfo() const { DARABONBA_PTR_GET_DEFAULT(checkInfo_, "") };
    inline CheckInstanceWebTerminalRequest& setCheckInfo(string checkInfo) { DARABONBA_PTR_SET_VALUE(checkInfo_, checkInfo) };


  protected:
    std::shared_ptr<string> checkInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
