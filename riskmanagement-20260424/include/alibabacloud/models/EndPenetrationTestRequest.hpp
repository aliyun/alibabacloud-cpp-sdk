// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDPENETRATIONTESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENDPENETRATIONTESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class EndPenetrationTestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EndPenetrationTestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, EndPenetrationTestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    EndPenetrationTestRequest() = default ;
    EndPenetrationTestRequest(const EndPenetrationTestRequest &) = default ;
    EndPenetrationTestRequest(EndPenetrationTestRequest &&) = default ;
    EndPenetrationTestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EndPenetrationTestRequest() = default ;
    EndPenetrationTestRequest& operator=(const EndPenetrationTestRequest &) = default ;
    EndPenetrationTestRequest& operator=(EndPenetrationTestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline EndPenetrationTestRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The unique sequence ID of the application record.
    // 
    // > This field is of the Long type. Precision loss may occur during serialization or deserialization. Ensure that the value does not exceed 9007199254740991.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
