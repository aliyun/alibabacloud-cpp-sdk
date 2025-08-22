// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRACEAPPREQUESTDELETEREASONREASONIDS_HPP_
#define ALIBABACLOUD_MODELS_DELETETRACEAPPREQUESTDELETEREASONREASONIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteTraceAppRequestDeleteReasonReasonIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTraceAppRequestDeleteReasonReasonIds& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTraceAppRequestDeleteReasonReasonIds& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteTraceAppRequestDeleteReasonReasonIds() = default ;
    DeleteTraceAppRequestDeleteReasonReasonIds(const DeleteTraceAppRequestDeleteReasonReasonIds &) = default ;
    DeleteTraceAppRequestDeleteReasonReasonIds(DeleteTraceAppRequestDeleteReasonReasonIds &&) = default ;
    DeleteTraceAppRequestDeleteReasonReasonIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTraceAppRequestDeleteReasonReasonIds() = default ;
    DeleteTraceAppRequestDeleteReasonReasonIds& operator=(const DeleteTraceAppRequestDeleteReasonReasonIds &) = default ;
    DeleteTraceAppRequestDeleteReasonReasonIds& operator=(DeleteTraceAppRequestDeleteReasonReasonIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DeleteTraceAppRequestDeleteReasonReasonIds& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteTraceAppRequestDeleteReasonReasonIds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the reason for deletion.
    std::shared_ptr<int32_t> id_ = nullptr;
    // A description of the reason for removal.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
