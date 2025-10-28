// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSLSLOGSTORELISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYSLSLOGSTORELISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QuerySlsLogStoreListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySlsLogStoreListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerSide, consumerSide_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySlsLogStoreListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerSide, consumerSide_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    QuerySlsLogStoreListResponseBodyResult() = default ;
    QuerySlsLogStoreListResponseBodyResult(const QuerySlsLogStoreListResponseBodyResult &) = default ;
    QuerySlsLogStoreListResponseBodyResult(QuerySlsLogStoreListResponseBodyResult &&) = default ;
    QuerySlsLogStoreListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySlsLogStoreListResponseBodyResult() = default ;
    QuerySlsLogStoreListResponseBodyResult& operator=(const QuerySlsLogStoreListResponseBodyResult &) = default ;
    QuerySlsLogStoreListResponseBodyResult& operator=(QuerySlsLogStoreListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerSide_ == nullptr
        && return this->createTime_ == nullptr && return this->link_ == nullptr && return this->logstore_ == nullptr && return this->project_ == nullptr && return this->source_ == nullptr; };
    // consumerSide Field Functions 
    bool hasConsumerSide() const { return this->consumerSide_ != nullptr;};
    void deleteConsumerSide() { this->consumerSide_ = nullptr;};
    inline string consumerSide() const { DARABONBA_PTR_GET_DEFAULT(consumerSide_, "") };
    inline QuerySlsLogStoreListResponseBodyResult& setConsumerSide(string consumerSide) { DARABONBA_PTR_SET_VALUE(consumerSide_, consumerSide) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QuerySlsLogStoreListResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline QuerySlsLogStoreListResponseBodyResult& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline QuerySlsLogStoreListResponseBodyResult& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline QuerySlsLogStoreListResponseBodyResult& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline QuerySlsLogStoreListResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The type of the logging service.
    std::shared_ptr<string> consumerSide_ = nullptr;
    // The time when the logging service was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The URL of the logging service.
    std::shared_ptr<string> link_ = nullptr;
    // The name of the Logstore.
    std::shared_ptr<string> logstore_ = nullptr;
    // The name of the project.
    std::shared_ptr<string> project_ = nullptr;
    // The source of logs. Valid values:
    // 
    // *   Standard output: stdout.log
    // *   File log: the directory that stores logs
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
