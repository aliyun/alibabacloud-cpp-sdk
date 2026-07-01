// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRIMARYKEY_HPP_
#define ALIBABACLOUD_MODELS_PRIMARYKEY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class PrimaryKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrimaryKey& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(constraintName, constraintName_);
      DARABONBA_PTR_TO_JSON(constraintType, constraintType_);
      DARABONBA_PTR_TO_JSON(enforced, enforced_);
    };
    friend void from_json(const Darabonba::Json& j, PrimaryKey& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(constraintName, constraintName_);
      DARABONBA_PTR_FROM_JSON(constraintType, constraintType_);
      DARABONBA_PTR_FROM_JSON(enforced, enforced_);
    };
    PrimaryKey() = default ;
    PrimaryKey(const PrimaryKey &) = default ;
    PrimaryKey(PrimaryKey &&) = default ;
    PrimaryKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrimaryKey() = default ;
    PrimaryKey& operator=(const PrimaryKey &) = default ;
    PrimaryKey& operator=(PrimaryKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && this->constraintName_ == nullptr && this->constraintType_ == nullptr && this->enforced_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
    inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
    inline PrimaryKey& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline PrimaryKey& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // constraintName Field Functions 
    bool hasConstraintName() const { return this->constraintName_ != nullptr;};
    void deleteConstraintName() { this->constraintName_ = nullptr;};
    inline string getConstraintName() const { DARABONBA_PTR_GET_DEFAULT(constraintName_, "") };
    inline PrimaryKey& setConstraintName(string constraintName) { DARABONBA_PTR_SET_VALUE(constraintName_, constraintName) };


    // constraintType Field Functions 
    bool hasConstraintType() const { return this->constraintType_ != nullptr;};
    void deleteConstraintType() { this->constraintType_ = nullptr;};
    inline string getConstraintType() const { DARABONBA_PTR_GET_DEFAULT(constraintType_, "") };
    inline PrimaryKey& setConstraintType(string constraintType) { DARABONBA_PTR_SET_VALUE(constraintType_, constraintType) };


    // enforced Field Functions 
    bool hasEnforced() const { return this->enforced_ != nullptr;};
    void deleteEnforced() { this->enforced_ = nullptr;};
    inline bool getEnforced() const { DARABONBA_PTR_GET_DEFAULT(enforced_, false) };
    inline PrimaryKey& setEnforced(bool enforced) { DARABONBA_PTR_SET_VALUE(enforced_, enforced) };


  protected:
    // The primary key column group.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> columns_ {};
    // The constraint name.
    // 
    // This parameter is required.
    shared_ptr<string> constraintName_ {};
    // This parameter is required.
    shared_ptr<string> constraintType_ {};
    // This parameter is required.
    shared_ptr<bool> enforced_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
