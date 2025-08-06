// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHREADRESPONSEBODYTHREAD_HPP_
#define ALIBABACLOUD_MODELS_CREATETHREADRESPONSEBODYTHREAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateThreadResponseBodyThread : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateThreadResponseBodyThread& obj) { 
      DARABONBA_PTR_TO_JSON(createAt, createAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CreateThreadResponseBodyThread& obj) { 
      DARABONBA_PTR_FROM_JSON(createAt, createAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    CreateThreadResponseBodyThread() = default ;
    CreateThreadResponseBodyThread(const CreateThreadResponseBodyThread &) = default ;
    CreateThreadResponseBodyThread(CreateThreadResponseBodyThread &&) = default ;
    CreateThreadResponseBodyThread(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateThreadResponseBodyThread() = default ;
    CreateThreadResponseBodyThread& operator=(const CreateThreadResponseBodyThread &) = default ;
    CreateThreadResponseBodyThread& operator=(CreateThreadResponseBodyThread &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createAt_ != nullptr
        && this->id_ != nullptr; };
    // createAt Field Functions 
    bool hasCreateAt() const { return this->createAt_ != nullptr;};
    void deleteCreateAt() { this->createAt_ = nullptr;};
    inline int64_t createAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, 0L) };
    inline CreateThreadResponseBodyThread& setCreateAt(int64_t createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateThreadResponseBodyThread& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<int64_t> createAt_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
