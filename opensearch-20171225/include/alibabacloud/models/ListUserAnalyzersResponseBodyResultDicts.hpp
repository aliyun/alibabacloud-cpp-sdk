// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERANALYZERSRESPONSEBODYRESULTDICTS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERANALYZERSRESPONSEBODYRESULTDICTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListUserAnalyzersResponseBodyResultDicts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAnalyzersResponseBodyResultDicts& obj) { 
      DARABONBA_PTR_TO_JSON(available, available_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(entriesCount, entriesCount_);
      DARABONBA_PTR_TO_JSON(entriesLimit, entriesLimit_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAnalyzersResponseBodyResultDicts& obj) { 
      DARABONBA_PTR_FROM_JSON(available, available_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(entriesCount, entriesCount_);
      DARABONBA_PTR_FROM_JSON(entriesLimit, entriesLimit_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    ListUserAnalyzersResponseBodyResultDicts() = default ;
    ListUserAnalyzersResponseBodyResultDicts(const ListUserAnalyzersResponseBodyResultDicts &) = default ;
    ListUserAnalyzersResponseBodyResultDicts(ListUserAnalyzersResponseBodyResultDicts &&) = default ;
    ListUserAnalyzersResponseBodyResultDicts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAnalyzersResponseBodyResultDicts() = default ;
    ListUserAnalyzersResponseBodyResultDicts& operator=(const ListUserAnalyzersResponseBodyResultDicts &) = default ;
    ListUserAnalyzersResponseBodyResultDicts& operator=(ListUserAnalyzersResponseBodyResultDicts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->available_ == nullptr
        && return this->created_ == nullptr && return this->entriesCount_ == nullptr && return this->entriesLimit_ == nullptr && return this->id_ == nullptr && return this->type_ == nullptr
        && return this->updated_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline bool available() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
    inline ListUserAnalyzersResponseBodyResultDicts& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline ListUserAnalyzersResponseBodyResultDicts& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // entriesCount Field Functions 
    bool hasEntriesCount() const { return this->entriesCount_ != nullptr;};
    void deleteEntriesCount() { this->entriesCount_ = nullptr;};
    inline int32_t entriesCount() const { DARABONBA_PTR_GET_DEFAULT(entriesCount_, 0) };
    inline ListUserAnalyzersResponseBodyResultDicts& setEntriesCount(int32_t entriesCount) { DARABONBA_PTR_SET_VALUE(entriesCount_, entriesCount) };


    // entriesLimit Field Functions 
    bool hasEntriesLimit() const { return this->entriesLimit_ != nullptr;};
    void deleteEntriesLimit() { this->entriesLimit_ = nullptr;};
    inline int32_t entriesLimit() const { DARABONBA_PTR_GET_DEFAULT(entriesLimit_, 0) };
    inline ListUserAnalyzersResponseBodyResultDicts& setEntriesLimit(int32_t entriesLimit) { DARABONBA_PTR_SET_VALUE(entriesLimit_, entriesLimit) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListUserAnalyzersResponseBodyResultDicts& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListUserAnalyzersResponseBodyResultDicts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline ListUserAnalyzersResponseBodyResultDicts& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // Indicates whether the application is available.
    std::shared_ptr<bool> available_ = nullptr;
    // The timestamp when the application was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The number of intervention entries.
    std::shared_ptr<int32_t> entriesCount_ = nullptr;
    // The maximum number of intervention entries that can be created in the dictionary.
    std::shared_ptr<int32_t> entriesLimit_ = nullptr;
    // The ID of the dictionary.
    std::shared_ptr<string> id_ = nullptr;
    // The type. Valid value:
    // 
    // *   segment
    std::shared_ptr<string> type_ = nullptr;
    // The timestamp when the application was last updated.
    std::shared_ptr<int32_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
