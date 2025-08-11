// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSEMBEDLISTRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSEMBEDLISTRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetWorksEmbedListResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorksEmbedListResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(EmbedTime, embedTime_);
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
      DARABONBA_PTR_TO_JSON(WorksName, worksName_);
      DARABONBA_PTR_TO_JSON(WorksType, worksType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorksEmbedListResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbedTime, embedTime_);
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
      DARABONBA_PTR_FROM_JSON(WorksName, worksName_);
      DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetWorksEmbedListResponseBodyResultData() = default ;
    GetWorksEmbedListResponseBodyResultData(const GetWorksEmbedListResponseBodyResultData &) = default ;
    GetWorksEmbedListResponseBodyResultData(GetWorksEmbedListResponseBodyResultData &&) = default ;
    GetWorksEmbedListResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorksEmbedListResponseBodyResultData() = default ;
    GetWorksEmbedListResponseBodyResultData& operator=(const GetWorksEmbedListResponseBodyResultData &) = default ;
    GetWorksEmbedListResponseBodyResultData& operator=(GetWorksEmbedListResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->embedTime_ != nullptr
        && this->worksId_ != nullptr && this->worksName_ != nullptr && this->worksType_ != nullptr && this->workspaceId_ != nullptr; };
    // embedTime Field Functions 
    bool hasEmbedTime() const { return this->embedTime_ != nullptr;};
    void deleteEmbedTime() { this->embedTime_ = nullptr;};
    inline string embedTime() const { DARABONBA_PTR_GET_DEFAULT(embedTime_, "") };
    inline GetWorksEmbedListResponseBodyResultData& setEmbedTime(string embedTime) { DARABONBA_PTR_SET_VALUE(embedTime_, embedTime) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline GetWorksEmbedListResponseBodyResultData& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


    // worksName Field Functions 
    bool hasWorksName() const { return this->worksName_ != nullptr;};
    void deleteWorksName() { this->worksName_ = nullptr;};
    inline string worksName() const { DARABONBA_PTR_GET_DEFAULT(worksName_, "") };
    inline GetWorksEmbedListResponseBodyResultData& setWorksName(string worksName) { DARABONBA_PTR_SET_VALUE(worksName_, worksName) };


    // worksType Field Functions 
    bool hasWorksType() const { return this->worksType_ != nullptr;};
    void deleteWorksType() { this->worksType_ = nullptr;};
    inline string worksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
    inline GetWorksEmbedListResponseBodyResultData& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetWorksEmbedListResponseBodyResultData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Embed time
    std::shared_ptr<string> embedTime_ = nullptr;
    // Report ID
    std::shared_ptr<string> worksId_ = nullptr;
    // Report name
    std::shared_ptr<string> worksName_ = nullptr;
    // Report type
    std::shared_ptr<string> worksType_ = nullptr;
    // Workspace ID
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
