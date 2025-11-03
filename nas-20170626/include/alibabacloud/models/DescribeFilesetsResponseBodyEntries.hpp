// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESETSRESPONSEBODYENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESETSRESPONSEBODYENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFilesetsResponseBodyEntriesEntrie.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesetsResponseBodyEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesetsResponseBodyEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Entrie, entrie_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesetsResponseBodyEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Entrie, entrie_);
    };
    DescribeFilesetsResponseBodyEntries() = default ;
    DescribeFilesetsResponseBodyEntries(const DescribeFilesetsResponseBodyEntries &) = default ;
    DescribeFilesetsResponseBodyEntries(DescribeFilesetsResponseBodyEntries &&) = default ;
    DescribeFilesetsResponseBodyEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesetsResponseBodyEntries() = default ;
    DescribeFilesetsResponseBodyEntries& operator=(const DescribeFilesetsResponseBodyEntries &) = default ;
    DescribeFilesetsResponseBodyEntries& operator=(DescribeFilesetsResponseBodyEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entrie_ == nullptr; };
    // entrie Field Functions 
    bool hasEntrie() const { return this->entrie_ != nullptr;};
    void deleteEntrie() { this->entrie_ = nullptr;};
    inline const vector<Models::DescribeFilesetsResponseBodyEntriesEntrie> & entrie() const { DARABONBA_PTR_GET_CONST(entrie_, vector<Models::DescribeFilesetsResponseBodyEntriesEntrie>) };
    inline vector<Models::DescribeFilesetsResponseBodyEntriesEntrie> entrie() { DARABONBA_PTR_GET(entrie_, vector<Models::DescribeFilesetsResponseBodyEntriesEntrie>) };
    inline DescribeFilesetsResponseBodyEntries& setEntrie(const vector<Models::DescribeFilesetsResponseBodyEntriesEntrie> & entrie) { DARABONBA_PTR_SET_VALUE(entrie_, entrie) };
    inline DescribeFilesetsResponseBodyEntries& setEntrie(vector<Models::DescribeFilesetsResponseBodyEntriesEntrie> && entrie) { DARABONBA_PTR_SET_RVALUE(entrie_, entrie) };


  protected:
    std::shared_ptr<vector<Models::DescribeFilesetsResponseBodyEntriesEntrie>> entrie_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
