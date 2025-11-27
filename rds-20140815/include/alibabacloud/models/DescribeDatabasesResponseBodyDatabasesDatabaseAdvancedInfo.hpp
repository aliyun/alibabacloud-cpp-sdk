// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEADVANCEDINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEADVANCEDINFO_HPP_
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
  class DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedDbProperty, advancedDbProperty_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedDbProperty, advancedDbProperty_);
    };
    DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo(const DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo(DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo &&) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo& operator=(const DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo& operator=(DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedDbProperty_ == nullptr; };
    // advancedDbProperty Field Functions 
    bool hasAdvancedDbProperty() const { return this->advancedDbProperty_ != nullptr;};
    void deleteAdvancedDbProperty() { this->advancedDbProperty_ = nullptr;};
    inline const vector<Darabonba::Json> & advancedDbProperty() const { DARABONBA_PTR_GET_CONST(advancedDbProperty_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> advancedDbProperty() { DARABONBA_PTR_GET(advancedDbProperty_, vector<Darabonba::Json>) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo& setAdvancedDbProperty(const vector<Darabonba::Json> & advancedDbProperty) { DARABONBA_PTR_SET_VALUE(advancedDbProperty_, advancedDbProperty) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo& setAdvancedDbProperty(vector<Darabonba::Json> && advancedDbProperty) { DARABONBA_PTR_SET_RVALUE(advancedDbProperty_, advancedDbProperty) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> advancedDbProperty_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
