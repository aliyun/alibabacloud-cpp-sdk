// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGEMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGEMACHINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateEdgeMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hostname, hostname_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(sn, sn_);
    };
    CreateEdgeMachineRequest() = default ;
    CreateEdgeMachineRequest(const CreateEdgeMachineRequest &) = default ;
    CreateEdgeMachineRequest(CreateEdgeMachineRequest &&) = default ;
    CreateEdgeMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeMachineRequest() = default ;
    CreateEdgeMachineRequest& operator=(const CreateEdgeMachineRequest &) = default ;
    CreateEdgeMachineRequest& operator=(CreateEdgeMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostname_ != nullptr
        && this->model_ != nullptr && this->sn_ != nullptr; };
    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateEdgeMachineRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateEdgeMachineRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline CreateEdgeMachineRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The `hostname` of the cloud-native box.
    // 
    // >  After the cloud-native box is activated, the `hostname` is automatically modified. The `hostname` is prefixed with the model and the prefix is followed by a random string.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostname_ = nullptr;
    // The model of the cloud-native box.
    // 
    // This parameter is required.
    std::shared_ptr<string> model_ = nullptr;
    // The serial number of the cloud-native box.
    // 
    // This parameter is required.
    std::shared_ptr<string> sn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
