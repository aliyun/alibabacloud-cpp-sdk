// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEBASICINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BasicDbProperty, basicDbProperty_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicDbProperty, basicDbProperty_);
    };
    DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo(const DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo(DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo &&) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo& operator=(const DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo& operator=(DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicDbProperty_ == nullptr; };
    // basicDbProperty Field Functions 
    bool hasBasicDbProperty() const { return this->basicDbProperty_ != nullptr;};
    void deleteBasicDbProperty() { this->basicDbProperty_ = nullptr;};
    inline const vector<Darabonba::Json> & basicDbProperty() const { DARABONBA_PTR_GET_CONST(basicDbProperty_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> basicDbProperty() { DARABONBA_PTR_GET(basicDbProperty_, vector<Darabonba::Json>) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo& setBasicDbProperty(const vector<Darabonba::Json> & basicDbProperty) { DARABONBA_PTR_SET_VALUE(basicDbProperty_, basicDbProperty) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo& setBasicDbProperty(vector<Darabonba::Json> && basicDbProperty) { DARABONBA_PTR_SET_RVALUE(basicDbProperty_, basicDbProperty) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> basicDbProperty_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
