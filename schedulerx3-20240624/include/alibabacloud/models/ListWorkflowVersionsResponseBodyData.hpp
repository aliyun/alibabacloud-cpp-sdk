// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWVERSIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWVERSIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListWorkflowVersionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
    };
    ListWorkflowVersionsResponseBodyData() = default ;
    ListWorkflowVersionsResponseBodyData(const ListWorkflowVersionsResponseBodyData &) = default ;
    ListWorkflowVersionsResponseBodyData(ListWorkflowVersionsResponseBodyData &&) = default ;
    ListWorkflowVersionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowVersionsResponseBodyData() = default ;
    ListWorkflowVersionsResponseBodyData& operator=(const ListWorkflowVersionsResponseBodyData &) = default ;
    ListWorkflowVersionsResponseBodyData& operator=(ListWorkflowVersionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->current_ == nullptr && return this->dagVersion_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListWorkflowVersionsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline bool current() const { DARABONBA_PTR_GET_DEFAULT(current_, false) };
    inline ListWorkflowVersionsResponseBodyData& setCurrent(bool current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // dagVersion Field Functions 
    bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
    void deleteDagVersion() { this->dagVersion_ = nullptr;};
    inline string dagVersion() const { DARABONBA_PTR_GET_DEFAULT(dagVersion_, "") };
    inline ListWorkflowVersionsResponseBodyData& setDagVersion(string dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<bool> current_ = nullptr;
    std::shared_ptr<string> dagVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
