// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINDEXJOBRERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINDEXJOBRERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchIndexJobRerunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchIndexJobRerunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, SearchIndexJobRerunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    SearchIndexJobRerunRequest() = default ;
    SearchIndexJobRerunRequest(const SearchIndexJobRerunRequest &) = default ;
    SearchIndexJobRerunRequest(SearchIndexJobRerunRequest &&) = default ;
    SearchIndexJobRerunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchIndexJobRerunRequest() = default ;
    SearchIndexJobRerunRequest& operator=(const SearchIndexJobRerunRequest &) = default ;
    SearchIndexJobRerunRequest& operator=(SearchIndexJobRerunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaIds_ == nullptr
        && this->namespace_ == nullptr && this->searchLibName_ == nullptr && this->task_ == nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline SearchIndexJobRerunRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SearchIndexJobRerunRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline SearchIndexJobRerunRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string getTask() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline SearchIndexJobRerunRequest& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


  protected:
    // The ID of the media asset. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    shared_ptr<string> namespace_ {};
    // The search library.
    shared_ptr<string> searchLibName_ {};
    // The type of the job. Separate multiple types with commas (,).
    // 
    // *   aiLabel: smart tagging.
    // *   face: face recognition.
    // *   mm: large visual model.
    shared_ptr<string> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
