// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARXDATANODESRESPONSEBODYDBINSTANCEDATANODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARXDATANODESRESPONSEBODYDBINSTANCEDATANODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribePolarxDataNodesResponseBodyDBInstanceDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarxDataNodesResponseBodyDBInstanceDataNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarxDataNodesResponseBodyDBInstanceDataNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
    };
    DescribePolarxDataNodesResponseBodyDBInstanceDataNodes() = default ;
    DescribePolarxDataNodesResponseBodyDBInstanceDataNodes(const DescribePolarxDataNodesResponseBodyDBInstanceDataNodes &) = default ;
    DescribePolarxDataNodesResponseBodyDBInstanceDataNodes(DescribePolarxDataNodesResponseBodyDBInstanceDataNodes &&) = default ;
    DescribePolarxDataNodesResponseBodyDBInstanceDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarxDataNodesResponseBodyDBInstanceDataNodes() = default ;
    DescribePolarxDataNodesResponseBodyDBInstanceDataNodes& operator=(const DescribePolarxDataNodesResponseBodyDBInstanceDataNodes &) = default ;
    DescribePolarxDataNodesResponseBodyDBInstanceDataNodes& operator=(DescribePolarxDataNodesResponseBodyDBInstanceDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceDescription_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->DBInstanceName_ == nullptr; };
    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribePolarxDataNodesResponseBodyDBInstanceDataNodes& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribePolarxDataNodesResponseBodyDBInstanceDataNodes& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribePolarxDataNodesResponseBodyDBInstanceDataNodes& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


  protected:
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
