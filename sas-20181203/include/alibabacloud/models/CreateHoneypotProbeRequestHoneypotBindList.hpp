// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEREQUESTHONEYPOTBINDLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEREQUESTHONEYPOTBINDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHoneypotProbeRequestHoneypotBindListBindPortList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotProbeRequestHoneypotBindList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotProbeRequestHoneypotBindList& obj) { 
      DARABONBA_PTR_TO_JSON(BindPortList, bindPortList_);
      DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotProbeRequestHoneypotBindList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindPortList, bindPortList_);
      DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
    };
    CreateHoneypotProbeRequestHoneypotBindList() = default ;
    CreateHoneypotProbeRequestHoneypotBindList(const CreateHoneypotProbeRequestHoneypotBindList &) = default ;
    CreateHoneypotProbeRequestHoneypotBindList(CreateHoneypotProbeRequestHoneypotBindList &&) = default ;
    CreateHoneypotProbeRequestHoneypotBindList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotProbeRequestHoneypotBindList() = default ;
    CreateHoneypotProbeRequestHoneypotBindList& operator=(const CreateHoneypotProbeRequestHoneypotBindList &) = default ;
    CreateHoneypotProbeRequestHoneypotBindList& operator=(CreateHoneypotProbeRequestHoneypotBindList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindPortList_ != nullptr
        && this->honeypotId_ != nullptr; };
    // bindPortList Field Functions 
    bool hasBindPortList() const { return this->bindPortList_ != nullptr;};
    void deleteBindPortList() { this->bindPortList_ = nullptr;};
    inline const vector<Models::CreateHoneypotProbeRequestHoneypotBindListBindPortList> & bindPortList() const { DARABONBA_PTR_GET_CONST(bindPortList_, vector<Models::CreateHoneypotProbeRequestHoneypotBindListBindPortList>) };
    inline vector<Models::CreateHoneypotProbeRequestHoneypotBindListBindPortList> bindPortList() { DARABONBA_PTR_GET(bindPortList_, vector<Models::CreateHoneypotProbeRequestHoneypotBindListBindPortList>) };
    inline CreateHoneypotProbeRequestHoneypotBindList& setBindPortList(const vector<Models::CreateHoneypotProbeRequestHoneypotBindListBindPortList> & bindPortList) { DARABONBA_PTR_SET_VALUE(bindPortList_, bindPortList) };
    inline CreateHoneypotProbeRequestHoneypotBindList& setBindPortList(vector<Models::CreateHoneypotProbeRequestHoneypotBindListBindPortList> && bindPortList) { DARABONBA_PTR_SET_RVALUE(bindPortList_, bindPortList) };


    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string honeypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline CreateHoneypotProbeRequestHoneypotBindList& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


  protected:
    // The listener ports.
    std::shared_ptr<vector<Models::CreateHoneypotProbeRequestHoneypotBindListBindPortList>> bindPortList_ = nullptr;
    // The ID of the honeypot.
    // 
    // > You can call the [ListHoneypot](~~ListHoneypot~~) operation to query the IDs of honeypots.
    std::shared_ptr<string> honeypotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
