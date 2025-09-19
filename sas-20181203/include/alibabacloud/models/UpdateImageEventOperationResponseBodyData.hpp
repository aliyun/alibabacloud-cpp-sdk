// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEEVENTOPERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEEVENTOPERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateImageEventOperationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageEventOperationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageEventOperationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateImageEventOperationResponseBodyData() = default ;
    UpdateImageEventOperationResponseBodyData(const UpdateImageEventOperationResponseBodyData &) = default ;
    UpdateImageEventOperationResponseBodyData(UpdateImageEventOperationResponseBodyData &&) = default ;
    UpdateImageEventOperationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageEventOperationResponseBodyData() = default ;
    UpdateImageEventOperationResponseBodyData& operator=(const UpdateImageEventOperationResponseBodyData &) = default ;
    UpdateImageEventOperationResponseBodyData& operator=(UpdateImageEventOperationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateImageEventOperationResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the alert handling rule, which is the same as the value of the Id request parameter.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
