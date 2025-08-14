// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAVATARVIDEOTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAVATARVIDEOTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitAvatarVideoTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAvatarVideoTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskUuid, taskUuid_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAvatarVideoTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskUuid, taskUuid_);
    };
    SubmitAvatarVideoTaskResponseBodyData() = default ;
    SubmitAvatarVideoTaskResponseBodyData(const SubmitAvatarVideoTaskResponseBodyData &) = default ;
    SubmitAvatarVideoTaskResponseBodyData(SubmitAvatarVideoTaskResponseBodyData &&) = default ;
    SubmitAvatarVideoTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAvatarVideoTaskResponseBodyData() = default ;
    SubmitAvatarVideoTaskResponseBodyData& operator=(const SubmitAvatarVideoTaskResponseBodyData &) = default ;
    SubmitAvatarVideoTaskResponseBodyData& operator=(SubmitAvatarVideoTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskUuid_ != nullptr; };
    // taskUuid Field Functions 
    bool hasTaskUuid() const { return this->taskUuid_ != nullptr;};
    void deleteTaskUuid() { this->taskUuid_ = nullptr;};
    inline string taskUuid() const { DARABONBA_PTR_GET_DEFAULT(taskUuid_, "") };
    inline SubmitAvatarVideoTaskResponseBodyData& setTaskUuid(string taskUuid) { DARABONBA_PTR_SET_VALUE(taskUuid_, taskUuid) };


  protected:
    std::shared_ptr<string> taskUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
