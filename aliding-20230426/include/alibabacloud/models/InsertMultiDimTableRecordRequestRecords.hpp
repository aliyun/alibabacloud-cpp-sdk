// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTMULTIDIMTABLERECORDREQUESTRECORDS_HPP_
#define ALIBABACLOUD_MODELS_INSERTMULTIDIMTABLERECORDREQUESTRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertMultiDimTableRecordRequestRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertMultiDimTableRecordRequestRecords& obj) { 
      DARABONBA_ANY_TO_JSON(Fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, InsertMultiDimTableRecordRequestRecords& obj) { 
      DARABONBA_ANY_FROM_JSON(Fields, fields_);
    };
    InsertMultiDimTableRecordRequestRecords() = default ;
    InsertMultiDimTableRecordRequestRecords(const InsertMultiDimTableRecordRequestRecords &) = default ;
    InsertMultiDimTableRecordRequestRecords(InsertMultiDimTableRecordRequestRecords &&) = default ;
    InsertMultiDimTableRecordRequestRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertMultiDimTableRecordRequestRecords() = default ;
    InsertMultiDimTableRecordRequestRecords& operator=(const InsertMultiDimTableRecordRequestRecords &) = default ;
    InsertMultiDimTableRecordRequestRecords& operator=(InsertMultiDimTableRecordRequestRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fields_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline     const Darabonba::Json & fields() const { DARABONBA_GET(fields_) };
    Darabonba::Json & fields() { DARABONBA_GET(fields_) };
    inline InsertMultiDimTableRecordRequestRecords& setFields(const Darabonba::Json & fields) { DARABONBA_SET_VALUE(fields_, fields) };
    inline InsertMultiDimTableRecordRequestRecords& setFields(Darabonba::Json & fields) { DARABONBA_SET_RVALUE(fields_, fields) };


  protected:
    // This parameter is required.
    Darabonba::Json fields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
