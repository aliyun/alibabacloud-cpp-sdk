// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIRFLOWRESPONSEBODYROOTRESPONSES_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIRFLOWRESPONSEBODYROOTRESPONSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteAirflowResponseBodyRootResponses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAirflowResponseBodyRootResponses& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAirflowResponseBodyRootResponses& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DeleteAirflowResponseBodyRootResponses() = default ;
    DeleteAirflowResponseBodyRootResponses(const DeleteAirflowResponseBodyRootResponses &) = default ;
    DeleteAirflowResponseBodyRootResponses(DeleteAirflowResponseBodyRootResponses &&) = default ;
    DeleteAirflowResponseBodyRootResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAirflowResponseBodyRootResponses() = default ;
    DeleteAirflowResponseBodyRootResponses& operator=(const DeleteAirflowResponseBodyRootResponses &) = default ;
    DeleteAirflowResponseBodyRootResponses& operator=(DeleteAirflowResponseBodyRootResponses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr
        && this->uuid_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteAirflowResponseBodyRootResponses& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DeleteAirflowResponseBodyRootResponses& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
