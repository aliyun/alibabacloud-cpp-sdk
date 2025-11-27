// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGADInstanceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGADInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMemberCount, createMemberCount_);
      DARABONBA_PTR_TO_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_TO_JSON(TaskID, taskID_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGADInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMemberCount, createMemberCount_);
      DARABONBA_PTR_FROM_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_FROM_JSON(TaskID, taskID_);
    };
    CreateGADInstanceResponseBodyResult() = default ;
    CreateGADInstanceResponseBodyResult(const CreateGADInstanceResponseBodyResult &) = default ;
    CreateGADInstanceResponseBodyResult(CreateGADInstanceResponseBodyResult &&) = default ;
    CreateGADInstanceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGADInstanceResponseBodyResult() = default ;
    CreateGADInstanceResponseBodyResult& operator=(const CreateGADInstanceResponseBodyResult &) = default ;
    CreateGADInstanceResponseBodyResult& operator=(CreateGADInstanceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createMemberCount_ == nullptr
        && return this->gadInstanceName_ == nullptr && return this->taskID_ == nullptr; };
    // createMemberCount Field Functions 
    bool hasCreateMemberCount() const { return this->createMemberCount_ != nullptr;};
    void deleteCreateMemberCount() { this->createMemberCount_ = nullptr;};
    inline string createMemberCount() const { DARABONBA_PTR_GET_DEFAULT(createMemberCount_, "") };
    inline CreateGADInstanceResponseBodyResult& setCreateMemberCount(string createMemberCount) { DARABONBA_PTR_SET_VALUE(createMemberCount_, createMemberCount) };


    // gadInstanceName Field Functions 
    bool hasGadInstanceName() const { return this->gadInstanceName_ != nullptr;};
    void deleteGadInstanceName() { this->gadInstanceName_ = nullptr;};
    inline string gadInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceName_, "") };
    inline CreateGADInstanceResponseBodyResult& setGadInstanceName(string gadInstanceName) { DARABONBA_PTR_SET_VALUE(gadInstanceName_, gadInstanceName) };


    // taskID Field Functions 
    bool hasTaskID() const { return this->taskID_ != nullptr;};
    void deleteTaskID() { this->taskID_ = nullptr;};
    inline string taskID() const { DARABONBA_PTR_GET_DEFAULT(taskID_, "") };
    inline CreateGADInstanceResponseBodyResult& setTaskID(string taskID) { DARABONBA_PTR_SET_VALUE(taskID_, taskID) };


  protected:
    // The number of unit nodes that are created by calling this operation.
    std::shared_ptr<string> createMemberCount_ = nullptr;
    // The ID of the global active database cluster.
    std::shared_ptr<string> gadInstanceName_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
