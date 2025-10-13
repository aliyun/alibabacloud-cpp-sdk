// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONVERSIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONVERSIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Version.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationVersionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationVersionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationVersionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    ListApplicationVersionsOutput() = default ;
    ListApplicationVersionsOutput(const ListApplicationVersionsOutput &) = default ;
    ListApplicationVersionsOutput(ListApplicationVersionsOutput &&) = default ;
    ListApplicationVersionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationVersionsOutput() = default ;
    ListApplicationVersionsOutput& operator=(const ListApplicationVersionsOutput &) = default ;
    ListApplicationVersionsOutput& operator=(ListApplicationVersionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->versions_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListApplicationVersionsOutput& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationVersionsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationVersionsOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<Version> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Version>) };
    inline vector<Version> versions() { DARABONBA_PTR_GET(versions_, vector<Version>) };
    inline ListApplicationVersionsOutput& setVersions(const vector<Version> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListApplicationVersionsOutput& setVersions(vector<Version> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<Version>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
