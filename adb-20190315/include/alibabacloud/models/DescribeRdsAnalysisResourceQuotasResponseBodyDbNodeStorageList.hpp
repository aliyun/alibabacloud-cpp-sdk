// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYDBNODESTORAGELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYDBNODESTORAGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageListDBNodeStorage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
    };
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList(const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList(DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList &&) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList& operator=(const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList& operator=(DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBNodeStorage_ == nullptr; };
    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageListDBNodeStorage> & DBNodeStorage() const { DARABONBA_PTR_GET_CONST(DBNodeStorage_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageListDBNodeStorage>) };
    inline vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageListDBNodeStorage> DBNodeStorage() { DARABONBA_PTR_GET(DBNodeStorage_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageListDBNodeStorage>) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList& setDBNodeStorage(const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageListDBNodeStorage> & DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList& setDBNodeStorage(vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageListDBNodeStorage> && DBNodeStorage) { DARABONBA_PTR_SET_RVALUE(DBNodeStorage_, DBNodeStorage) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageListDBNodeStorage>> DBNodeStorage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
