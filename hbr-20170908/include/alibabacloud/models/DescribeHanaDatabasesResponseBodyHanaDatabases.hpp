// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANADATABASESRESPONSEBODYHANADATABASES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANADATABASESRESPONSEBODYHANADATABASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaDatabasesResponseBodyHanaDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaDatabasesResponseBodyHanaDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(HanaDatabase, hanaDatabase_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaDatabasesResponseBodyHanaDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(HanaDatabase, hanaDatabase_);
    };
    DescribeHanaDatabasesResponseBodyHanaDatabases() = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabases(const DescribeHanaDatabasesResponseBodyHanaDatabases &) = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabases(DescribeHanaDatabasesResponseBodyHanaDatabases &&) = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaDatabasesResponseBodyHanaDatabases() = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabases& operator=(const DescribeHanaDatabasesResponseBodyHanaDatabases &) = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabases& operator=(DescribeHanaDatabasesResponseBodyHanaDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hanaDatabase_ != nullptr; };
    // hanaDatabase Field Functions 
    bool hasHanaDatabase() const { return this->hanaDatabase_ != nullptr;};
    void deleteHanaDatabase() { this->hanaDatabase_ = nullptr;};
    inline const vector<Models::DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase> & hanaDatabase() const { DARABONBA_PTR_GET_CONST(hanaDatabase_, vector<Models::DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase>) };
    inline vector<Models::DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase> hanaDatabase() { DARABONBA_PTR_GET(hanaDatabase_, vector<Models::DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase>) };
    inline DescribeHanaDatabasesResponseBodyHanaDatabases& setHanaDatabase(const vector<Models::DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase> & hanaDatabase) { DARABONBA_PTR_SET_VALUE(hanaDatabase_, hanaDatabase) };
    inline DescribeHanaDatabasesResponseBodyHanaDatabases& setHanaDatabase(vector<Models::DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase> && hanaDatabase) { DARABONBA_PTR_SET_RVALUE(hanaDatabase_, hanaDatabase) };


  protected:
    std::shared_ptr<vector<Models::DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase>> hanaDatabase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
