// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONREQUESTCONFOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONREQUESTCONFOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineWithAssetsCodeVersionRequestConfOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineWithAssetsCodeVersionRequestConfOptions& obj) { 
      DARABONBA_PTR_TO_JSON(NotFoundStrategy, notFoundStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineWithAssetsCodeVersionRequestConfOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(NotFoundStrategy, notFoundStrategy_);
    };
    CreateRoutineWithAssetsCodeVersionRequestConfOptions() = default ;
    CreateRoutineWithAssetsCodeVersionRequestConfOptions(const CreateRoutineWithAssetsCodeVersionRequestConfOptions &) = default ;
    CreateRoutineWithAssetsCodeVersionRequestConfOptions(CreateRoutineWithAssetsCodeVersionRequestConfOptions &&) = default ;
    CreateRoutineWithAssetsCodeVersionRequestConfOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineWithAssetsCodeVersionRequestConfOptions() = default ;
    CreateRoutineWithAssetsCodeVersionRequestConfOptions& operator=(const CreateRoutineWithAssetsCodeVersionRequestConfOptions &) = default ;
    CreateRoutineWithAssetsCodeVersionRequestConfOptions& operator=(CreateRoutineWithAssetsCodeVersionRequestConfOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notFoundStrategy_ == nullptr; };
    // notFoundStrategy Field Functions 
    bool hasNotFoundStrategy() const { return this->notFoundStrategy_ != nullptr;};
    void deleteNotFoundStrategy() { this->notFoundStrategy_ = nullptr;};
    inline string notFoundStrategy() const { DARABONBA_PTR_GET_DEFAULT(notFoundStrategy_, "") };
    inline CreateRoutineWithAssetsCodeVersionRequestConfOptions& setNotFoundStrategy(string notFoundStrategy) { DARABONBA_PTR_SET_VALUE(notFoundStrategy_, notFoundStrategy) };


  protected:
    std::shared_ptr<string> notFoundStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
