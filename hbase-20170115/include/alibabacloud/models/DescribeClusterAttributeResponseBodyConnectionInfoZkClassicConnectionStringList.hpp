// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYCONNECTIONINFOZKCLASSICCONNECTIONSTRINGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYCONNECTIONINFOZKCLASSICCONNECTIONSTRINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList& obj) { 
      DARABONBA_PTR_TO_JSON(String, string_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList& obj) { 
      DARABONBA_PTR_FROM_JSON(String, string_);
    };
    DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList() = default ;
    DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList(const DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList &) = default ;
    DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList(DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList &&) = default ;
    DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList() = default ;
    DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList& operator=(const DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList &) = default ;
    DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList& operator=(DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->string_ == nullptr; };
    // string Field Functions 
    bool hasString() const { return this->string_ != nullptr;};
    void deleteString() { this->string_ = nullptr;};
    inline const vector<string> & string() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
    inline vector<string> string() { DARABONBA_PTR_GET(string_, vector<string>) };
    inline DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
    inline DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


  protected:
    std::shared_ptr<vector<string>> string_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
