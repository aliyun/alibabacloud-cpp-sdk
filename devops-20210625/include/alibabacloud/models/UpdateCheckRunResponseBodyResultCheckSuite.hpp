// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKRUNRESPONSEBODYRESULTCHECKSUITE_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKRUNRESPONSEBODYRESULTCHECKSUITE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateCheckRunResponseBodyResultCheckSuite : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckRunResponseBodyResultCheckSuite& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckRunResponseBodyResultCheckSuite& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    UpdateCheckRunResponseBodyResultCheckSuite() = default ;
    UpdateCheckRunResponseBodyResultCheckSuite(const UpdateCheckRunResponseBodyResultCheckSuite &) = default ;
    UpdateCheckRunResponseBodyResultCheckSuite(UpdateCheckRunResponseBodyResultCheckSuite &&) = default ;
    UpdateCheckRunResponseBodyResultCheckSuite(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckRunResponseBodyResultCheckSuite() = default ;
    UpdateCheckRunResponseBodyResultCheckSuite& operator=(const UpdateCheckRunResponseBodyResultCheckSuite &) = default ;
    UpdateCheckRunResponseBodyResultCheckSuite& operator=(UpdateCheckRunResponseBodyResultCheckSuite &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateCheckRunResponseBodyResultCheckSuite& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
