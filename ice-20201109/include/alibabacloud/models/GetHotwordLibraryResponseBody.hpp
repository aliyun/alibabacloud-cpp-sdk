// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTWORDLIBRARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTWORDLIBRARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Hotword.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetHotwordLibraryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotwordLibraryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_TO_JSON(Hotwords, hotwords_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageScenario, usageScenario_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotwordLibraryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_FROM_JSON(Hotwords, hotwords_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageScenario, usageScenario_);
    };
    GetHotwordLibraryResponseBody() = default ;
    GetHotwordLibraryResponseBody(const GetHotwordLibraryResponseBody &) = default ;
    GetHotwordLibraryResponseBody(GetHotwordLibraryResponseBody &&) = default ;
    GetHotwordLibraryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotwordLibraryResponseBody() = default ;
    GetHotwordLibraryResponseBody& operator=(const GetHotwordLibraryResponseBody &) = default ;
    GetHotwordLibraryResponseBody& operator=(GetHotwordLibraryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->hotwordLibraryId_ != nullptr && this->hotwords_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr
        && this->usageScenario_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetHotwordLibraryResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetHotwordLibraryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hotwordLibraryId Field Functions 
    bool hasHotwordLibraryId() const { return this->hotwordLibraryId_ != nullptr;};
    void deleteHotwordLibraryId() { this->hotwordLibraryId_ = nullptr;};
    inline string hotwordLibraryId() const { DARABONBA_PTR_GET_DEFAULT(hotwordLibraryId_, "") };
    inline GetHotwordLibraryResponseBody& setHotwordLibraryId(string hotwordLibraryId) { DARABONBA_PTR_SET_VALUE(hotwordLibraryId_, hotwordLibraryId) };


    // hotwords Field Functions 
    bool hasHotwords() const { return this->hotwords_ != nullptr;};
    void deleteHotwords() { this->hotwords_ = nullptr;};
    inline const vector<Hotword> & hotwords() const { DARABONBA_PTR_GET_CONST(hotwords_, vector<Hotword>) };
    inline vector<Hotword> hotwords() { DARABONBA_PTR_GET(hotwords_, vector<Hotword>) };
    inline GetHotwordLibraryResponseBody& setHotwords(const vector<Hotword> & hotwords) { DARABONBA_PTR_SET_VALUE(hotwords_, hotwords) };
    inline GetHotwordLibraryResponseBody& setHotwords(vector<Hotword> && hotwords) { DARABONBA_PTR_SET_RVALUE(hotwords_, hotwords) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetHotwordLibraryResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotwordLibraryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageScenario Field Functions 
    bool hasUsageScenario() const { return this->usageScenario_ != nullptr;};
    void deleteUsageScenario() { this->usageScenario_ = nullptr;};
    inline string usageScenario() const { DARABONBA_PTR_GET_DEFAULT(usageScenario_, "") };
    inline GetHotwordLibraryResponseBody& setUsageScenario(string usageScenario) { DARABONBA_PTR_SET_VALUE(usageScenario_, usageScenario) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> hotwordLibraryId_ = nullptr;
    std::shared_ptr<vector<Hotword>> hotwords_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> usageScenario_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
