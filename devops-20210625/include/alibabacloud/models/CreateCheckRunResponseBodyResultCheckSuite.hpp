// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKRUNRESPONSEBODYRESULTCHECKSUITE_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKRUNRESPONSEBODYRESULTCHECKSUITE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCheckRunResponseBodyResultCheckSuite : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckRunResponseBodyResultCheckSuite& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCheckRunResponseBodyResultCheckSuite& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    CreateCheckRunResponseBodyResultCheckSuite() = default ;
    CreateCheckRunResponseBodyResultCheckSuite(const CreateCheckRunResponseBodyResultCheckSuite &) = default ;
    CreateCheckRunResponseBodyResultCheckSuite(CreateCheckRunResponseBodyResultCheckSuite &&) = default ;
    CreateCheckRunResponseBodyResultCheckSuite(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckRunResponseBodyResultCheckSuite() = default ;
    CreateCheckRunResponseBodyResultCheckSuite& operator=(const CreateCheckRunResponseBodyResultCheckSuite &) = default ;
    CreateCheckRunResponseBodyResultCheckSuite& operator=(CreateCheckRunResponseBodyResultCheckSuite &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateCheckRunResponseBodyResultCheckSuite& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
