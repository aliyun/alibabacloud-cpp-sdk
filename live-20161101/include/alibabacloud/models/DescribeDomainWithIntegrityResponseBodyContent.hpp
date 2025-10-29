// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINWITHINTEGRITYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINWITHINTEGRITYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeDomainWithIntegrityResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainWithIntegrityResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Points, points_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainWithIntegrityResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Points, points_);
    };
    DescribeDomainWithIntegrityResponseBodyContent() = default ;
    DescribeDomainWithIntegrityResponseBodyContent(const DescribeDomainWithIntegrityResponseBodyContent &) = default ;
    DescribeDomainWithIntegrityResponseBodyContent(DescribeDomainWithIntegrityResponseBodyContent &&) = default ;
    DescribeDomainWithIntegrityResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainWithIntegrityResponseBodyContent() = default ;
    DescribeDomainWithIntegrityResponseBodyContent& operator=(const DescribeDomainWithIntegrityResponseBodyContent &) = default ;
    DescribeDomainWithIntegrityResponseBodyContent& operator=(DescribeDomainWithIntegrityResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->name_ == nullptr && return this->points_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<string> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
    inline vector<string> columns() { DARABONBA_PTR_GET(columns_, vector<string>) };
    inline DescribeDomainWithIntegrityResponseBodyContent& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DescribeDomainWithIntegrityResponseBodyContent& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDomainWithIntegrityResponseBodyContent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<string> & points() const { DARABONBA_PTR_GET_CONST(points_, vector<string>) };
    inline vector<string> points() { DARABONBA_PTR_GET(points_, vector<string>) };
    inline DescribeDomainWithIntegrityResponseBodyContent& setPoints(const vector<string> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline DescribeDomainWithIntegrityResponseBodyContent& setPoints(vector<string> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


  protected:
    // The column names.
    std::shared_ptr<vector<string>> columns_ = nullptr;
    // The table name.
    std::shared_ptr<string> name_ = nullptr;
    // The subpoints.
    std::shared_ptr<vector<string>> points_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
