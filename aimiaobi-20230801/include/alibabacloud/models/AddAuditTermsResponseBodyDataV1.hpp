// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUDITTERMSRESPONSEBODYDATAV1_HPP_
#define ALIBABACLOUD_MODELS_ADDAUDITTERMSRESPONSEBODYDATAV1_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AddAuditTermsResponseBodyDataV1 : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuditTermsResponseBodyDataV1& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuditTermsResponseBodyDataV1& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    AddAuditTermsResponseBodyDataV1() = default ;
    AddAuditTermsResponseBodyDataV1(const AddAuditTermsResponseBodyDataV1 &) = default ;
    AddAuditTermsResponseBodyDataV1(AddAuditTermsResponseBodyDataV1 &&) = default ;
    AddAuditTermsResponseBodyDataV1(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuditTermsResponseBodyDataV1() = default ;
    AddAuditTermsResponseBodyDataV1& operator=(const AddAuditTermsResponseBodyDataV1 &) = default ;
    AddAuditTermsResponseBodyDataV1& operator=(AddAuditTermsResponseBodyDataV1 &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AddAuditTermsResponseBodyDataV1& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
