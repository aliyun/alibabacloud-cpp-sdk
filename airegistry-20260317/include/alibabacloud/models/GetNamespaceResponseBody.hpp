// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNAMESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNAMESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class GetNamespaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNamespaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNamespaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNamespaceResponseBody() = default ;
    GetNamespaceResponseBody(const GetNamespaceResponseBody &) = default ;
    GetNamespaceResponseBody(GetNamespaceResponseBody &&) = default ;
    GetNamespaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNamespaceResponseBody() = default ;
    GetNamespaceResponseBody& operator=(const GetNamespaceResponseBody &) = default ;
    GetNamespaceResponseBody& operator=(GetNamespaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(PromptCount, promptCount_);
        DARABONBA_PTR_TO_JSON(ScanPolicy, scanPolicy_);
        DARABONBA_PTR_TO_JSON(SkillCount, skillCount_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceIndex, sourceIndex_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(PromptCount, promptCount_);
        DARABONBA_PTR_FROM_JSON(ScanPolicy, scanPolicy_);
        DARABONBA_PTR_FROM_JSON(SkillCount, skillCount_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceIndex, sourceIndex_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr && this->promptCount_ == nullptr && this->scanPolicy_ == nullptr
        && this->skillCount_ == nullptr && this->source_ == nullptr && this->sourceIndex_ == nullptr && this->tags_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Data& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // promptCount Field Functions 
      bool hasPromptCount() const { return this->promptCount_ != nullptr;};
      void deletePromptCount() { this->promptCount_ = nullptr;};
      inline int32_t getPromptCount() const { DARABONBA_PTR_GET_DEFAULT(promptCount_, 0) };
      inline Data& setPromptCount(int32_t promptCount) { DARABONBA_PTR_SET_VALUE(promptCount_, promptCount) };


      // scanPolicy Field Functions 
      bool hasScanPolicy() const { return this->scanPolicy_ != nullptr;};
      void deleteScanPolicy() { this->scanPolicy_ = nullptr;};
      inline string getScanPolicy() const { DARABONBA_PTR_GET_DEFAULT(scanPolicy_, "") };
      inline Data& setScanPolicy(string scanPolicy) { DARABONBA_PTR_SET_VALUE(scanPolicy_, scanPolicy) };


      // skillCount Field Functions 
      bool hasSkillCount() const { return this->skillCount_ != nullptr;};
      void deleteSkillCount() { this->skillCount_ = nullptr;};
      inline int32_t getSkillCount() const { DARABONBA_PTR_GET_DEFAULT(skillCount_, 0) };
      inline Data& setSkillCount(int32_t skillCount) { DARABONBA_PTR_SET_VALUE(skillCount_, skillCount) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceIndex Field Functions 
      bool hasSourceIndex() const { return this->sourceIndex_ != nullptr;};
      void deleteSourceIndex() { this->sourceIndex_ = nullptr;};
      inline int32_t getSourceIndex() const { DARABONBA_PTR_GET_DEFAULT(sourceIndex_, 0) };
      inline Data& setSourceIndex(int32_t sourceIndex) { DARABONBA_PTR_SET_VALUE(sourceIndex_, sourceIndex) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline Data& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    protected:
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> namespaceId_ {};
      shared_ptr<int32_t> promptCount_ {};
      shared_ptr<string> scanPolicy_ {};
      shared_ptr<int32_t> skillCount_ {};
      shared_ptr<string> source_ {};
      shared_ptr<int32_t> sourceIndex_ {};
      shared_ptr<string> tags_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNamespaceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetNamespaceResponseBody::Data) };
    inline GetNamespaceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetNamespaceResponseBody::Data) };
    inline GetNamespaceResponseBody& setData(const GetNamespaceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNamespaceResponseBody& setData(GetNamespaceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNamespaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetNamespaceResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
