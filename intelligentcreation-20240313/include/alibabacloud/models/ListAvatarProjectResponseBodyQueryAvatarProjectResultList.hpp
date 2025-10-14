// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARPROJECTRESPONSEBODYQUERYAVATARPROJECTRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARPROJECTRESPONSEBODYQUERYAVATARPROJECTRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAvatarProjectResponseBodyQueryAvatarProjectResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarProjectResponseBodyQueryAvatarProjectResultList& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarProjectResponseBodyQueryAvatarProjectResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListAvatarProjectResponseBodyQueryAvatarProjectResultList() = default ;
    ListAvatarProjectResponseBodyQueryAvatarProjectResultList(const ListAvatarProjectResponseBodyQueryAvatarProjectResultList &) = default ;
    ListAvatarProjectResponseBodyQueryAvatarProjectResultList(ListAvatarProjectResponseBodyQueryAvatarProjectResultList &&) = default ;
    ListAvatarProjectResponseBodyQueryAvatarProjectResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarProjectResponseBodyQueryAvatarProjectResultList() = default ;
    ListAvatarProjectResponseBodyQueryAvatarProjectResultList& operator=(const ListAvatarProjectResponseBodyQueryAvatarProjectResultList &) = default ;
    ListAvatarProjectResponseBodyQueryAvatarProjectResultList& operator=(ListAvatarProjectResponseBodyQueryAvatarProjectResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->errorMsg_ == nullptr && return this->projectId_ == nullptr && return this->projectName_ == nullptr && return this->status_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListAvatarProjectResponseBodyQueryAvatarProjectResultList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListAvatarProjectResponseBodyQueryAvatarProjectResultList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListAvatarProjectResponseBodyQueryAvatarProjectResultList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListAvatarProjectResponseBodyQueryAvatarProjectResultList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAvatarProjectResponseBodyQueryAvatarProjectResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
