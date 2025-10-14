// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLERECORDSREQUESTRECORDIDS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLERECORDSREQUESTRECORDIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateMultiDimTableRecordsRequestRecordIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiDimTableRecordsRequestRecordIds& obj) { 
      DARABONBA_ANY_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiDimTableRecordsRequestRecordIds& obj) { 
      DARABONBA_ANY_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateMultiDimTableRecordsRequestRecordIds() = default ;
    UpdateMultiDimTableRecordsRequestRecordIds(const UpdateMultiDimTableRecordsRequestRecordIds &) = default ;
    UpdateMultiDimTableRecordsRequestRecordIds(UpdateMultiDimTableRecordsRequestRecordIds &&) = default ;
    UpdateMultiDimTableRecordsRequestRecordIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiDimTableRecordsRequestRecordIds() = default ;
    UpdateMultiDimTableRecordsRequestRecordIds& operator=(const UpdateMultiDimTableRecordsRequestRecordIds &) = default ;
    UpdateMultiDimTableRecordsRequestRecordIds& operator=(UpdateMultiDimTableRecordsRequestRecordIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fields_ == nullptr
        && return this->id_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline     const Darabonba::Json & fields() const { DARABONBA_GET(fields_) };
    Darabonba::Json & fields() { DARABONBA_GET(fields_) };
    inline UpdateMultiDimTableRecordsRequestRecordIds& setFields(const Darabonba::Json & fields) { DARABONBA_SET_VALUE(fields_, fields) };
    inline UpdateMultiDimTableRecordsRequestRecordIds& setFields(Darabonba::Json & fields) { DARABONBA_SET_RVALUE(fields_, fields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateMultiDimTableRecordsRequestRecordIds& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    Darabonba::Json fields_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
