// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NluServiceParamsJson, nluServiceParamsJson_);
      DARABONBA_PTR_TO_JSON(UnionInstanceId, unionInstanceId_);
      DARABONBA_PTR_TO_JSON(UnionSource, unionSource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NluServiceParamsJson, nluServiceParamsJson_);
      DARABONBA_PTR_FROM_JSON(UnionInstanceId, unionInstanceId_);
      DARABONBA_PTR_FROM_JSON(UnionSource, unionSource_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrency_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->nluServiceParamsJson_ == nullptr && this->unionInstanceId_ == nullptr && this->unionSource_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline CreateInstanceRequest& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nluServiceParamsJson Field Functions 
    bool hasNluServiceParamsJson() const { return this->nluServiceParamsJson_ != nullptr;};
    void deleteNluServiceParamsJson() { this->nluServiceParamsJson_ = nullptr;};
    inline string getNluServiceParamsJson() const { DARABONBA_PTR_GET_DEFAULT(nluServiceParamsJson_, "") };
    inline CreateInstanceRequest& setNluServiceParamsJson(string nluServiceParamsJson) { DARABONBA_PTR_SET_VALUE(nluServiceParamsJson_, nluServiceParamsJson) };


    // unionInstanceId Field Functions 
    bool hasUnionInstanceId() const { return this->unionInstanceId_ != nullptr;};
    void deleteUnionInstanceId() { this->unionInstanceId_ = nullptr;};
    inline string getUnionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unionInstanceId_, "") };
    inline CreateInstanceRequest& setUnionInstanceId(string unionInstanceId) { DARABONBA_PTR_SET_VALUE(unionInstanceId_, unionInstanceId) };


    // unionSource Field Functions 
    bool hasUnionSource() const { return this->unionSource_ != nullptr;};
    void deleteUnionSource() { this->unionSource_ = nullptr;};
    inline string getUnionSource() const { DARABONBA_PTR_GET_DEFAULT(unionSource_, "") };
    inline CreateInstanceRequest& setUnionSource(string unionSource) { DARABONBA_PTR_SET_VALUE(unionSource_, unionSource) };


  protected:
    // The maximum concurrency of the instance.
    // 
    // This parameter is required.
    shared_ptr<int64_t> concurrency_ {};
    // The description of the instance.
    shared_ptr<string> description_ {};
    // The name of the Voice Navigator instance, which identifies the digital employee scenario.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Configuration parameters for the large language model service, in JSON format.
    // 
    // - Use this parameter to specify a Function Compute service.
    shared_ptr<string> nluServiceParamsJson_ {};
    // The ID of the source instance.
    // 
    // > If you set UnionSource to CCC, set this parameter to the ID of the Cloud Contact Center instance.
    shared_ptr<string> unionInstanceId_ {};
    // The source service.
    // 
    // - CCC: Cloud Contact Center
    shared_ptr<string> unionSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
