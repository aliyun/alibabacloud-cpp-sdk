// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPMATCH_HPP_
#define ALIBABACLOUD_MODELS_MCPMATCH_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MCPPathMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class MCPMatch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPMatch& obj) { 
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, MCPMatch& obj) { 
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    MCPMatch() = default ;
    MCPMatch(const MCPMatch &) = default ;
    MCPMatch(MCPMatch &&) = default ;
    MCPMatch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPMatch() = default ;
    MCPMatch& operator=(const MCPMatch &) = default ;
    MCPMatch& operator=(MCPMatch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->path_ == nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const MCPPathMatch & path() const { DARABONBA_PTR_GET_CONST(path_, MCPPathMatch) };
    inline MCPPathMatch path() { DARABONBA_PTR_GET(path_, MCPPathMatch) };
    inline MCPMatch& setPath(const MCPPathMatch & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline MCPMatch& setPath(MCPPathMatch && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


  protected:
    std::shared_ptr<MCPPathMatch> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
