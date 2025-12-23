// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIRSTRANKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIRSTRANKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFirstRankResponseBodyResultMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeFirstRankResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirstRankResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirstRankResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeFirstRankResponseBodyResult() = default ;
    DescribeFirstRankResponseBodyResult(const DescribeFirstRankResponseBodyResult &) = default ;
    DescribeFirstRankResponseBodyResult(DescribeFirstRankResponseBodyResult &&) = default ;
    DescribeFirstRankResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirstRankResponseBodyResult() = default ;
    DescribeFirstRankResponseBodyResult& operator=(const DescribeFirstRankResponseBodyResult &) = default ;
    DescribeFirstRankResponseBodyResult& operator=(DescribeFirstRankResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->description_ == nullptr && return this->meta_ == nullptr && return this->name_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline DescribeFirstRankResponseBodyResult& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFirstRankResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const vector<Models::DescribeFirstRankResponseBodyResultMeta> & meta() const { DARABONBA_PTR_GET_CONST(meta_, vector<Models::DescribeFirstRankResponseBodyResultMeta>) };
    inline vector<Models::DescribeFirstRankResponseBodyResultMeta> meta() { DARABONBA_PTR_GET(meta_, vector<Models::DescribeFirstRankResponseBodyResultMeta>) };
    inline DescribeFirstRankResponseBodyResult& setMeta(const vector<Models::DescribeFirstRankResponseBodyResultMeta> & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline DescribeFirstRankResponseBodyResult& setMeta(vector<Models::DescribeFirstRankResponseBodyResultMeta> && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeFirstRankResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Indicates whether the expression is the default one.
    std::shared_ptr<bool> active_ = nullptr;
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // The information about the expression.
    std::shared_ptr<vector<Models::DescribeFirstRankResponseBodyResultMeta>> meta_ = nullptr;
    // Parameter
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
