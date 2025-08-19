// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPECREVIEWTASKSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSPECREVIEWTASKSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class ListSpecReviewTasksResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSpecReviewTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(applyReason, applyReason_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListSpecReviewTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(applyReason, applyReason_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListSpecReviewTasksResponseBodyResult() = default ;
    ListSpecReviewTasksResponseBodyResult(const ListSpecReviewTasksResponseBodyResult &) = default ;
    ListSpecReviewTasksResponseBodyResult(ListSpecReviewTasksResponseBodyResult &&) = default ;
    ListSpecReviewTasksResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSpecReviewTasksResponseBodyResult() = default ;
    ListSpecReviewTasksResponseBodyResult& operator=(const ListSpecReviewTasksResponseBodyResult &) = default ;
    ListSpecReviewTasksResponseBodyResult& operator=(ListSpecReviewTasksResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->appName_ != nullptr && this->applyReason_ != nullptr && this->gmtCreate_ != nullptr && this->source_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListSpecReviewTasksResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListSpecReviewTasksResponseBodyResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline string applyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
    inline ListSpecReviewTasksResponseBodyResult& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListSpecReviewTasksResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListSpecReviewTasksResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSpecReviewTasksResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSpecReviewTasksResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 代表资源一级ID的资源属性字段
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> applyReason_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
