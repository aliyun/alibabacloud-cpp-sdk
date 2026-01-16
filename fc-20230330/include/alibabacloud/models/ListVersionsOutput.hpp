// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVERSIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTVERSIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Version.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListVersionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVersionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListVersionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    ListVersionsOutput() = default ;
    ListVersionsOutput(const ListVersionsOutput &) = default ;
    ListVersionsOutput(ListVersionsOutput &&) = default ;
    ListVersionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVersionsOutput() = default ;
    ListVersionsOutput& operator=(const ListVersionsOutput &) = default ;
    ListVersionsOutput& operator=(ListVersionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->nextToken_ == nullptr && this->versions_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListVersionsOutput& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVersionsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<Version> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Version>) };
    inline vector<Version> getVersions() { DARABONBA_PTR_GET(versions_, vector<Version>) };
    inline ListVersionsOutput& setVersions(const vector<Version> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListVersionsOutput& setVersions(vector<Version> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    shared_ptr<string> direction_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<Version>> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
