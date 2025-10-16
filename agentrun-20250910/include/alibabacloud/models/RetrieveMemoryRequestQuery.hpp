// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEMEMORYREQUESTQUERY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEMEMORYREQUESTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class RetrieveMemoryRequestQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveMemoryRequestQuery& obj) { 
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveMemoryRequestQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    RetrieveMemoryRequestQuery() = default ;
    RetrieveMemoryRequestQuery(const RetrieveMemoryRequestQuery &) = default ;
    RetrieveMemoryRequestQuery(RetrieveMemoryRequestQuery &&) = default ;
    RetrieveMemoryRequestQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveMemoryRequestQuery() = default ;
    RetrieveMemoryRequestQuery& operator=(const RetrieveMemoryRequestQuery &) = default ;
    RetrieveMemoryRequestQuery& operator=(RetrieveMemoryRequestQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memory_ == nullptr
        && return this->metadata_ == nullptr && return this->namespace_ == nullptr && return this->userId_ == nullptr; };
    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline RetrieveMemoryRequestQuery& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> metadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline RetrieveMemoryRequestQuery& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline RetrieveMemoryRequestQuery& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline RetrieveMemoryRequestQuery& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RetrieveMemoryRequestQuery& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> memory_ = nullptr;
    std::shared_ptr<map<string, string>> metadata_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
