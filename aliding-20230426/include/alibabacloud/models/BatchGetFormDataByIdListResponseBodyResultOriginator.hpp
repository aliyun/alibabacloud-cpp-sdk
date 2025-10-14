// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTRESPONSEBODYRESULTORIGINATOR_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTRESPONSEBODYRESULTORIGINATOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchGetFormDataByIdListResponseBodyResultOriginatorName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchGetFormDataByIdListResponseBodyResultOriginator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFormDataByIdListResponseBodyResultOriginator& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFormDataByIdListResponseBodyResultOriginator& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    BatchGetFormDataByIdListResponseBodyResultOriginator() = default ;
    BatchGetFormDataByIdListResponseBodyResultOriginator(const BatchGetFormDataByIdListResponseBodyResultOriginator &) = default ;
    BatchGetFormDataByIdListResponseBodyResultOriginator(BatchGetFormDataByIdListResponseBodyResultOriginator &&) = default ;
    BatchGetFormDataByIdListResponseBodyResultOriginator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFormDataByIdListResponseBodyResultOriginator() = default ;
    BatchGetFormDataByIdListResponseBodyResultOriginator& operator=(const BatchGetFormDataByIdListResponseBodyResultOriginator &) = default ;
    BatchGetFormDataByIdListResponseBodyResultOriginator& operator=(BatchGetFormDataByIdListResponseBodyResultOriginator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->userId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::BatchGetFormDataByIdListResponseBodyResultOriginatorName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::BatchGetFormDataByIdListResponseBodyResultOriginatorName) };
    inline Models::BatchGetFormDataByIdListResponseBodyResultOriginatorName name() { DARABONBA_PTR_GET(name_, Models::BatchGetFormDataByIdListResponseBodyResultOriginatorName) };
    inline BatchGetFormDataByIdListResponseBodyResultOriginator& setName(const Models::BatchGetFormDataByIdListResponseBodyResultOriginatorName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline BatchGetFormDataByIdListResponseBodyResultOriginator& setName(Models::BatchGetFormDataByIdListResponseBodyResultOriginatorName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline BatchGetFormDataByIdListResponseBodyResultOriginator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<Models::BatchGetFormDataByIdListResponseBodyResultOriginatorName> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
