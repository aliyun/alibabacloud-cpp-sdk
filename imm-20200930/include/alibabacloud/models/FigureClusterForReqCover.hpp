// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIGURECLUSTERFORREQCOVER_HPP_
#define ALIBABACLOUD_MODELS_FIGURECLUSTERFORREQCOVER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FigureClusterForReqCoverFigures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class FigureClusterForReqCover : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FigureClusterForReqCover& obj) { 
      DARABONBA_PTR_TO_JSON(Figures, figures_);
    };
    friend void from_json(const Darabonba::Json& j, FigureClusterForReqCover& obj) { 
      DARABONBA_PTR_FROM_JSON(Figures, figures_);
    };
    FigureClusterForReqCover() = default ;
    FigureClusterForReqCover(const FigureClusterForReqCover &) = default ;
    FigureClusterForReqCover(FigureClusterForReqCover &&) = default ;
    FigureClusterForReqCover(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FigureClusterForReqCover() = default ;
    FigureClusterForReqCover& operator=(const FigureClusterForReqCover &) = default ;
    FigureClusterForReqCover& operator=(FigureClusterForReqCover &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->figures_ == nullptr; };
    // figures Field Functions 
    bool hasFigures() const { return this->figures_ != nullptr;};
    void deleteFigures() { this->figures_ = nullptr;};
    inline const vector<Models::FigureClusterForReqCoverFigures> & figures() const { DARABONBA_PTR_GET_CONST(figures_, vector<Models::FigureClusterForReqCoverFigures>) };
    inline vector<Models::FigureClusterForReqCoverFigures> figures() { DARABONBA_PTR_GET(figures_, vector<Models::FigureClusterForReqCoverFigures>) };
    inline FigureClusterForReqCover& setFigures(const vector<Models::FigureClusterForReqCoverFigures> & figures) { DARABONBA_PTR_SET_VALUE(figures_, figures) };
    inline FigureClusterForReqCover& setFigures(vector<Models::FigureClusterForReqCoverFigures> && figures) { DARABONBA_PTR_SET_RVALUE(figures_, figures) };


  protected:
    std::shared_ptr<vector<Models::FigureClusterForReqCoverFigures>> figures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
