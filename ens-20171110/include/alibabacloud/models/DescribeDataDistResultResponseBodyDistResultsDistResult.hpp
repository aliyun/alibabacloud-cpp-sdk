// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTSDISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTSDISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDistResultResponseBodyDistResultsDistResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDistResultResponseBodyDistResultsDistResult& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StatusStats, statusStats_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDistResultResponseBodyDistResultsDistResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StatusStats, statusStats_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeDataDistResultResponseBodyDistResultsDistResult() = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResult(const DescribeDataDistResultResponseBodyDistResultsDistResult &) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResult(DescribeDataDistResultResponseBodyDistResultsDistResult &&) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDistResultResponseBodyDistResultsDistResult() = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResult& operator=(const DescribeDataDistResultResponseBodyDistResultsDistResult &) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResult& operator=(DescribeDataDistResultResponseBodyDistResultsDistResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->statusStats_ != nullptr && this->version_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDataDistResultResponseBodyDistResultsDistResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // statusStats Field Functions 
    bool hasStatusStats() const { return this->statusStats_ != nullptr;};
    void deleteStatusStats() { this->statusStats_ = nullptr;};
    inline const Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats & statusStats() const { DARABONBA_PTR_GET_CONST(statusStats_, Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats) };
    inline Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats statusStats() { DARABONBA_PTR_GET(statusStats_, Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats) };
    inline DescribeDataDistResultResponseBodyDistResultsDistResult& setStatusStats(const Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats & statusStats) { DARABONBA_PTR_SET_VALUE(statusStats_, statusStats) };
    inline DescribeDataDistResultResponseBodyDistResultsDistResult& setStatusStats(Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats && statusStats) { DARABONBA_PTR_SET_RVALUE(statusStats_, statusStats) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeDataDistResultResponseBodyDistResultsDistResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the data file.
    std::shared_ptr<string> name_ = nullptr;
    // The distribution status statistics.
    std::shared_ptr<Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats> statusStats_ = nullptr;
    // The version number of the data file.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
