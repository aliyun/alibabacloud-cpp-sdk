// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(asyncTaskId, asyncTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(asyncTaskId, asyncTaskId_);
    };
    CreateMmsJobResponseBodyData() = default ;
    CreateMmsJobResponseBodyData(const CreateMmsJobResponseBodyData &) = default ;
    CreateMmsJobResponseBodyData(CreateMmsJobResponseBodyData &&) = default ;
    CreateMmsJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsJobResponseBodyData() = default ;
    CreateMmsJobResponseBodyData& operator=(const CreateMmsJobResponseBodyData &) = default ;
    CreateMmsJobResponseBodyData& operator=(CreateMmsJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncTaskId_ != nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline int64_t asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, 0L) };
    inline CreateMmsJobResponseBodyData& setAsyncTaskId(int64_t asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


  protected:
    std::shared_ptr<int64_t> asyncTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
