// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUnknownThreatDetectStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnknownThreatDetectStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StudyMode, studyMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnknownThreatDetectStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StudyMode, studyMode_);
    };
    ListUnknownThreatDetectStrategyRequest() = default ;
    ListUnknownThreatDetectStrategyRequest(const ListUnknownThreatDetectStrategyRequest &) = default ;
    ListUnknownThreatDetectStrategyRequest(ListUnknownThreatDetectStrategyRequest &&) = default ;
    ListUnknownThreatDetectStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnknownThreatDetectStrategyRequest() = default ;
    ListUnknownThreatDetectStrategyRequest& operator=(const ListUnknownThreatDetectStrategyRequest &) = default ;
    ListUnknownThreatDetectStrategyRequest& operator=(ListUnknownThreatDetectStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr && this->studyMode_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline ListUnknownThreatDetectStrategyRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListUnknownThreatDetectStrategyRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUnknownThreatDetectStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListUnknownThreatDetectStrategyRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // studyMode Field Functions 
    bool hasStudyMode() const { return this->studyMode_ != nullptr;};
    void deleteStudyMode() { this->studyMode_ = nullptr;};
    inline string getStudyMode() const { DARABONBA_PTR_GET_DEFAULT(studyMode_, "") };
    inline ListUnknownThreatDetectStrategyRequest& setStudyMode(string studyMode) { DARABONBA_PTR_SET_VALUE(studyMode_, studyMode) };


  protected:
    // This parameter is required.
    shared_ptr<string> currentPage_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> studyMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
