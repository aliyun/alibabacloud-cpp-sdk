// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitTextTo3DAvatarVideoTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTextTo3DAvatarVideoTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskUuid, taskUuid_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTextTo3DAvatarVideoTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskUuid, taskUuid_);
    };
    SubmitTextTo3DAvatarVideoTaskResponseBodyData() = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBodyData(const SubmitTextTo3DAvatarVideoTaskResponseBodyData &) = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBodyData(SubmitTextTo3DAvatarVideoTaskResponseBodyData &&) = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTextTo3DAvatarVideoTaskResponseBodyData() = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBodyData& operator=(const SubmitTextTo3DAvatarVideoTaskResponseBodyData &) = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBodyData& operator=(SubmitTextTo3DAvatarVideoTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskUuid_ != nullptr; };
    // taskUuid Field Functions 
    bool hasTaskUuid() const { return this->taskUuid_ != nullptr;};
    void deleteTaskUuid() { this->taskUuid_ = nullptr;};
    inline string taskUuid() const { DARABONBA_PTR_GET_DEFAULT(taskUuid_, "") };
    inline SubmitTextTo3DAvatarVideoTaskResponseBodyData& setTaskUuid(string taskUuid) { DARABONBA_PTR_SET_VALUE(taskUuid_, taskUuid) };


  protected:
    std::shared_ptr<string> taskUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
