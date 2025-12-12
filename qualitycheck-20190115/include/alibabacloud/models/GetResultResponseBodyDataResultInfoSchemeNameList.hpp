// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOSCHEMENAMELIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOSCHEMENAMELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoSchemeNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoSchemeNameList& obj) { 
      DARABONBA_PTR_TO_JSON(SchemeNameList, schemeNameList_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoSchemeNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemeNameList, schemeNameList_);
    };
    GetResultResponseBodyDataResultInfoSchemeNameList() = default ;
    GetResultResponseBodyDataResultInfoSchemeNameList(const GetResultResponseBodyDataResultInfoSchemeNameList &) = default ;
    GetResultResponseBodyDataResultInfoSchemeNameList(GetResultResponseBodyDataResultInfoSchemeNameList &&) = default ;
    GetResultResponseBodyDataResultInfoSchemeNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoSchemeNameList() = default ;
    GetResultResponseBodyDataResultInfoSchemeNameList& operator=(const GetResultResponseBodyDataResultInfoSchemeNameList &) = default ;
    GetResultResponseBodyDataResultInfoSchemeNameList& operator=(GetResultResponseBodyDataResultInfoSchemeNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schemeNameList_ == nullptr; };
    // schemeNameList Field Functions 
    bool hasSchemeNameList() const { return this->schemeNameList_ != nullptr;};
    void deleteSchemeNameList() { this->schemeNameList_ = nullptr;};
    inline const vector<string> & schemeNameList() const { DARABONBA_PTR_GET_CONST(schemeNameList_, vector<string>) };
    inline vector<string> schemeNameList() { DARABONBA_PTR_GET(schemeNameList_, vector<string>) };
    inline GetResultResponseBodyDataResultInfoSchemeNameList& setSchemeNameList(const vector<string> & schemeNameList) { DARABONBA_PTR_SET_VALUE(schemeNameList_, schemeNameList) };
    inline GetResultResponseBodyDataResultInfoSchemeNameList& setSchemeNameList(vector<string> && schemeNameList) { DARABONBA_PTR_SET_RVALUE(schemeNameList_, schemeNameList) };


  protected:
    std::shared_ptr<vector<string>> schemeNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
